package com.ilcandroid.lim.tictectoedirtyver;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    Button a1, a2, a3, b1, b2, b3, c1, c2, c3 ;

    int turn = 1 ;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        a1 = (Button) findViewById(R.id.a1) ;
        a2 = (Button) findViewById(R.id.a2) ;
        a3 = (Button) findViewById(R.id.a3) ;
        b1 = (Button) findViewById(R.id.b1) ;
        b2 = (Button) findViewById(R.id.b2) ;
        b3 = (Button) findViewById(R.id.b3) ;
        c1 = (Button) findViewById(R.id.c1) ;
        c2 = (Button) findViewById(R.id.c2) ;
        c3 = (Button) findViewById(R.id.c3) ;

        a1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(a1.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        a1.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        a1.setText("O") ;
                    }
                }
                endGame() ;
            }
        });

        a2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(a2.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        a2.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        a2.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;

        a3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(a3.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        a3.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        a3.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(b1.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        b1.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        b1.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(b2.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        b2.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        b2.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;

        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(b3.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        b3.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        b3.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;
        c1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(c1.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        c1.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        c1.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;

        c2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(c2.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        c2.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        c2.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;

        c3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(c3.getText().toString().equals("")) {
                    if (turn == 1) {
                        turn = 2;
                        c3.setText("X");
                    }
                    else if (turn == 2) {
                        turn = 1 ;
                        c3.setText("O") ;
                    }
                }
                endGame() ;
            }
        }) ;

    }
    public void endGame() {
        String aa, ab, ac, ba, bb, bc, ca, cb, cc ;
        boolean end = false ;

        aa = a1.getText().toString() ;
        ab = a2.getText().toString() ;
        ac = a3.getText().toString() ;
        ba = b1.getText().toString() ;
        bb = b2.getText().toString() ;
        bc = b3.getText().toString() ;
        ca = c1.getText().toString() ;
        cb = c2.getText().toString() ;
        cc = c3.getText().toString() ;

        if(aa.equals("X") && ab.equals("X") && ac.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ba.equals("X") && bb.equals("X") && bc.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ca.equals("X") && cb.equals("X") && cc.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(aa.equals("X") && ba.equals("X") && ca.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ab.equals("X") && bb.equals("X") && cb.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ac.equals("X") && bc.equals("X") && cc.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(aa.equals("X") && bb.equals("X") && cc.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ac.equals("X") && bb.equals("X") && ca.equals("X")) {
            Toast.makeText(MainActivity.this, "Winner Player X!", Toast.LENGTH_SHORT).show();
            end = true ;
        }

        if(aa.equals("O") && ab.equals("O") && ac.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ba.equals("O") && bb.equals("O") && bc.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ca.equals("O") && cb.equals("O") && cc.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(aa.equals("O") && ba.equals("O") && ca.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ab.equals("O") && bb.equals("O") && cb.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ac.equals("O") && bc.equals("O") && cc.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(aa.equals("O") && bb.equals("O") && cc.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }
        if(ac.equals("O") && bb.equals("O") && ca.equals("O")) {
            Toast.makeText(MainActivity.this, "Winner Player O!", Toast.LENGTH_SHORT).show();
            end = true ;
        }

        if(end) {
            a1.setEnabled(false);
            a2.setEnabled(false);
            a3.setEnabled(false);
            b1.setEnabled(false);
            b2.setEnabled(false);
            b3.setEnabled(false);
            c1.setEnabled(false);
            c2.setEnabled(false);
            c3.setEnabled(false);
        }
    }
}
