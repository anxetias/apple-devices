// name: FUN_10064d9b4
// address: 10064d9b4

void FUN_10064d9b4(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = FUN_1004de449(param_2);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if (*(char *)(lVar2 + 0x6acf) == '\0') {
      bVar3 = *(int *)(lVar2 + 0x6b0c) != 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010064d9f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,bVar3,0,bVar3);
  return;
}

