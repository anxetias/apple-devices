// name: FUN_10032f390
// address: 10032f390

char * FUN_10032f390(uint param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x19) {
    pcVar1 = &DAT_10074507c + *(int *)(&DAT_10074507c + (ulong)param_1 * 4);
  }
  else {
    pcVar1 = "UNKNOWN";
  }
  return pcVar1;
}

