// name: FUN_1001d2d39
// address: 1001d2d39

char * FUN_1001d2d39(uint param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 9) {
    pcVar1 = &DAT_100711ffc + *(int *)(&DAT_100711ffc + (ulong)param_1 * 4);
  }
  else {
    pcVar1 = "";
  }
  return pcVar1;
}

