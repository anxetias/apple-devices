// name: FUN_10016d2c4
// address: 10016d2c4

int FUN_10016d2c4(undefined8 param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar5 = 4;
  pcVar2 = (char *)*param_2;
  do {
    *param_2 = (long)(pcVar2 + 1);
    cVar1 = *pcVar2;
    iVar6 = -0x30;
    if ((9 < (byte)(cVar1 - 0x30U)) && (iVar6 = -0x37, 5 < (byte)(cVar1 + 0xbfU))) {
      iVar6 = -0x57;
      if (5 < (byte)(cVar1 + 0x9fU)) {
        uVar4 = ___cxa_allocate_exception(0x20);
        FUN_10016c052(uVar4,8,"kParseErrorStringUnicodeEscapeInvalidHex",~param_2[1] + *param_2);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar4,&PTR_DAT_10083c098,FUN_10016c08a);
      }
    }
    iVar3 = iVar3 * 0x10 + (int)cVar1 + iVar6;
    iVar5 = iVar5 + -1;
    pcVar2 = pcVar2 + 1;
  } while (iVar5 != 0);
  return iVar3;
}

