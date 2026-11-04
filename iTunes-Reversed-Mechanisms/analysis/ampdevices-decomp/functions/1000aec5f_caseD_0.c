// name: caseD_0
// address: 1000aec5f

void switchD_1000cb590::caseD_0(undefined1 *param_1,undefined1 *param_2)

{
  int in_EAX;
  
  while( true ) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
    param_2[7] = param_1[7];
    in_EAX = in_EAX + -1;
    if (in_EAX == 0) break;
    param_2 = param_2 + 8;
    param_1 = param_1 + 8;
  }
  return;
}

