// name: FUN_1004253f4
// address: 1004253f4

long FUN_1004253f4(long param_1)

{
  long lVar1;
  
  lVar1 = 0x620;
  switch(*(uint *)(param_1 + 0x1300)) {
  case 3:
switchD_100425419_caseD_3:
    return *(long *)(param_1 + lVar1);
  case 4:
  case 5:
    goto switchD_100425419_caseD_4;
  case 6:
    goto switchD_100425419_caseD_6;
  case 7:
  case 8:
    lVar1 = 0x588;
    if (*(char *)(param_1 + 0x1354) != '\0') {
      lVar1 = 0x620;
    }
switchD_100425419_caseD_6:
    lVar1 = *(long *)(param_1 + lVar1);
    if (lVar1 == 0) {
      if ((*(uint *)(param_1 + 0x1300) & 0xfffffffe) == 4) {
switchD_100425419_caseD_4:
        lVar1 = 0x588;
        if (*(char *)(param_1 + 0x1354) != '\0') {
          lVar1 = 0x620;
        }
        goto switchD_100425419_caseD_3;
      }
switchD_100425419_default:
      lVar1 = 0;
    }
    return lVar1;
  default:
    goto switchD_100425419_default;
  }
}

