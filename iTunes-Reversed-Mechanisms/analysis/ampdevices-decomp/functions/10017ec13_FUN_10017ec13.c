// name: FUN_10017ec13
// address: 10017ec13

ulong FUN_10017ec13(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) {
    iVar1 = *param_1;
    bVar3 = 0;
    if ((param_2 == (int *)0x0) || (iVar1 != 0x41464350 && iVar1 != 0x504f5358)) goto LAB_10017ec8d;
    if ((*(long *)(param_2 + 4) != 0) &&
       ((iVar2 = *param_2, iVar2 == 0x504f5358 || (iVar2 == 0x41464350)))) {
      if (param_1 == param_2) {
        bVar3 = 1;
        goto LAB_10017ec8d;
      }
      if (iVar1 == iVar2) {
        lVar5 = FUN_100189f00(param_1);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010017ec89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(lVar5 + 0x40))(param_1,param_2);
          return uVar6;
        }
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          FUN_10068695e(uVar7);
        }
        FUN_1001782e9(0,0);
        bVar3 = 0xce;
        goto LAB_10017ec8d;
      }
    }
  }
  bVar3 = 0;
LAB_10017ec8d:
  return (ulong)bVar3;
}

