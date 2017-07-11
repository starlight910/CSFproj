package com.ilcandroid.lim.rockpaperscissors ;

import android.support.v7.app.AppCompatActivity ;
import android.os.Bundle ;
import android.view.Menu ;
import android.view.MenuItem ;
import android.widget.TextView ;
import java.lang.Math ;
import android.view.View ;
import java.util.Random ;

public class MainActivity extends AppCompatActivity {

    //Weights
    private double paperChance = 33 ;
    private double rockChance = 33 ;

    //Thinking
    private double repeatStyleWin = 1 ;
    private double repeatStyleLose = 1 ;
    private double repeatStyleDraw = 1 ;
    private double alterStyleWin = 0 ;
    private double alterStyleLose = 0 ;
    private double alterStyleDraw = 0 ;
    private double rockCount = 0 ;
    private double paperCount = 0 ;
    private double scissorsCount = 0 ;

    //Personality
    private double confidence = 5 ;
    private double forgetLimit = 3;

    //Game
    private int random ;
    private String userChoice ;
    private String aiChoice ;
    private String result ;
    private double aiScore = 0 ;
    private double userScore = 0 ;

    //Memory
    private String historyChoice = "None" ;
    private double historyResult ;

    private Random r = new Random() ;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void rock(View v) {

        // Learning Start
        rockCount = rockCount + 1 ;
        userChoice = "Rock" ;
        // Learning End

        // Luck Starts
        random = r.nextInt(102 - 1) ;
        // Luck Ends

        if (random < paperChance) {

            // Game Consequences Start
            aiChoice = "Paper" ;
            aiScore = aiScore + 1 ;
            confidence = confidence + 1 ;
            result = "You Lost" ;
            // Game Consequences End

            //Strategy Development Start
            historyResult = 0 ;
            if (historyChoice.equals(userChoice)) {
                repeatStyleLose = repeatStyleLose + 1;
            }
            else {
                alterStyleLose = alterStyleLose + 1;
            }
            // Strategy Development End

            // Forgetting Starts

            // Forgetting Ends

            }
            else {
                if (random < paperChance + rockChance) {

                // Game Consequences Start
                aiChoice = "Rock" ;
                result = "Draw" ;
                // Game Consequences End

                //Strategy Development Start
                if (historyChoice.equals(userChoice)) {
                    repeatStyleDraw = repeatStyleDraw + 1;
                }
                else {
                    alterStyleDraw = alterStyleDraw + 1;
                }
                // Forgetting Starts

                // Forgetting Ends

            }

        }
        else {
            aiChoice = "Scissors" ;
            userScore = userScore + 1 ;
            confidence = confidence - 2 ;
            result = " You Won" ;

            historyResult = 1 ;

            if (historyChoice.equals(userChoice)) {
                repeatStyleWin = repeatStyleWin + 1;
            }
            else {
                alterStyleWin = alterStyleWin + 1;
            }
        }
    }

    // Strategy Development start
    if (result.equals("You Lost")) {
        if (alterStyleLose > repeatStyleLose) {
            rockChance = rockChance - (confidence /2) ;
            paperChance = paperChance - confidence ;
        }
        if (repeatStyleLose > alterStyleLose) {
            rockChance = rockChance + (confidence /2) ;
            paperChance = paperChance + confidence ;

        }
    }

    if (result.equals("You Won")) {
        if (repeatStyleWin > alterStyleWin) {
            rockChance = rockChance + (confidence /2) ;
            paperChance = paperChance + confidence ;
        }
        if (alterStyleWin > repeatStyleWin) {
            rockChance = rockChance - (confidence /2) ;
            paperChance = paperChance - confidence ;

        }
    }



}





