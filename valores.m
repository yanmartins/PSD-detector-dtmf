% ----------- SUBAMOSTRADOR
fs = 44100;
N = 10;
fpass_N = 44100/(2*N);

% ----------- DISCRIMINADOR DE FREQUENCIAS
fs_down = 44100/10;

fpass_PA = sqrt(941*1209);
fpass_PB = sqrt(941*1209);

% Atenuacoes (dB)
a_stop = 30;
a_pass = 3;

% Linha 1
fc_l1 = 679;
fs1_l1 = 601.55;
fp1_l1 = 666.815;
fp2_l1 = 691.185;
fs2_l1 = 756.45;

% Linha 2
fc_l2 = 770;
fs1_l2 = 691.185;
fp1_l2 = 756.45;
fp2_l2 = 783.55;
fs2_l2 = 837.22;

% Linha 3
fc_l3 = 852;
fs1_l3 = 783.55;
fp1_l3 = 837.22;
fp2_l3 = 866.78;
fs2_l3 = 924.885;

% Linha 4
fc_l4 = 941;
fs1_l4 = 866.78;
fp1_l4 = 924.885;
fp2_l4 = 957.115;
fs2_l4 = 1188.865;

% Coluna 1
fc_c1 = 1209;
fs1_c1 = 957.115;
fp1_c1 = 1188.865;
fp2_c1 = 1229.135;
fs2_c1 = 1313.96;

% Coluna 2
fc_c2 = 1336;
fs1_c2 = 1229.135;
fp1_c2 = 1313.96;
fp2_c2 = 1358.04;
fs2_c2 = 1452.845;

% Coluna 3
fc_c3 = 1477;
fs1_c3 = 1358.04;
fp1_c3 = 1452.845;
fp2_c3 = 1501.155;
fs2_c3 = 1606.505;

% Coluna 4
fc_c4 = 1633;
fs1_c4 = 1501.155;
fp1_c4 = 1606.505;
fp2_c4 = 1659.495;
fs2_c4 = 1764.845;

% Delay devido ao atraso de grupo
delay_l1 = 12;
delay_l4 = 5;
delay_c1 = 24;
delay_c2 = 24;
delay_c3 = 28;
delay_c4 = 31;

% Filtro passa-baixa apos retificador
fpb_ret = 1/(2*pi*0.005);
