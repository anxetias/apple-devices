// name: FUN_1005a11da
// address: 1005a11da

void FUN_1005a11da(undefined8 param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 8;
  do {
    lVar3 = FUN_100166b7f(param_1,*(undefined8 *)(&UNK_10086e1e8 + lVar4));
    if (lVar3 != 0) {
      uVar1 = *(uint *)((long)&PTR_cf_Contacts_10086e1f0 + lVar4);
      cVar2 = FUN_100167dd2(lVar3,&cf_DisableTethered,0);
      if (cVar2 != '\0') {
        *(uint *)(param_2 + 0x6628) = *(uint *)(param_2 + 0x6628) | uVar1;
      }
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x58);
  return;
}

