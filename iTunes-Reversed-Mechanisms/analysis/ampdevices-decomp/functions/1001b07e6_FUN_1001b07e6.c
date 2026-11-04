// name: FUN_1001b07e6
// address: 1001b07e6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b07e6(long *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0xb);
  auVar5 = pmovsxbd(in_XMM0,_DAT_1007115d0);
  (&DAT_1008c5278)[uVar3 * 5] =
       CONCAT44((int)param_1[4] + (int)((ulong)(&DAT_1008c5278)[uVar3 * 5] >> 0x20),
                auVar5._0_4_ + (int)(&DAT_1008c5278)[uVar3 * 5]);
  if (param_2 == 0) {
    if (*param_1 != 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_10069f924(uVar4);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
    }
    *param_1 = (long)(&DAT_1008c5260 + uVar3 * 0x28);
    lVar1 = (&DAT_1008c5268)[uVar3 * 5];
    param_1[1] = lVar1;
    param_1[2] = 0;
    if (lVar1 == 0) {
      *(long **)(&DAT_1008c5270 + uVar3 * 0x28) = param_1;
    }
    else {
      *(long **)(lVar1 + 0x10) = param_1;
    }
    (&DAT_1008c5268)[uVar3 * 5] = param_1;
  }
  else {
    FUN_1001b0678(&DAT_1008c5260 + uVar3 * 0x28,param_1);
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  return;
}

