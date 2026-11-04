// name: FUN_100157527
// address: 100157527

char * FUN_100157527(int param_1)

{
  char *pcVar1;
  
  if (param_1 - 1U < 3) {
    pcVar1 = &DAT_10070bcb4 + *(int *)(&DAT_10070bcb4 + (ulong)(param_1 - 1U) * 4);
  }
  else {
    pcVar1 = "";
  }
  return pcVar1;
}

