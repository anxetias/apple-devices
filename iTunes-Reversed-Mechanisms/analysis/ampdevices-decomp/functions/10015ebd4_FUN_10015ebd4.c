// name: FUN_10015ebd4
// address: 10015ebd4

undefined4
FUN_10015ebd4(undefined8 param_1,uint *param_2,int *param_3,undefined8 *param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if ((param_5 == (int *)0x0) || (*param_5 != 0x61756463)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_10066ddad(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar8 = 0xffffffe4;
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
    if (*param_3 == 1) {
      if (*(char *)((long)param_5 + 0x7a) == '\0') {
        uVar7 = *param_2;
        uVar1 = param_5[8];
        if ((*(char *)((long)param_5 + 0x79) == '\0') || (param_5[0x18] != 0)) {
          *(undefined1 *)((long)param_5 + 0x79) = 0;
          uVar2 = param_5[0x25];
          uVar4 = param_5[0x24] - uVar2;
          if ((int)(uVar7 * uVar1) < (int)(param_5[0x24] - uVar2)) {
            uVar4 = uVar7 * uVar1;
          }
          if ((int)uVar4 < 1) {
            *param_2 = 0;
            uVar8 = 0xffffffd9;
          }
          else {
            uVar8 = 0;
            iVar6 = uVar1 * (uVar4 / uVar1);
            param_3[2] = param_5[9];
            param_3[3] = iVar6;
            *(ulong *)(param_3 + 4) = (ulong)uVar2 + *(long *)(param_5 + 0x22);
            param_5[0x25] = iVar6 + uVar2;
            *param_2 = uVar4 / uVar1;
          }
        }
        else {
          if ((uint)param_5[0x19] < uVar7) {
            uVar7 = param_5[0x19];
          }
          param_3[2] = param_5[9];
          param_3[3] = uVar1 * uVar7;
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_5 + 0x20);
          *param_2 = uVar7;
          *(undefined1 *)((long)param_5 + 0x79) = 0;
          uVar8 = 0;
        }
      }
      else {
        param_3[2] = param_5[9];
        uVar8 = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        *param_2 = 0;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10066dd37(uVar5);
      }
      uVar8 = 0;
      FUN_1001782e9(0,0);
      *param_2 = 0;
      param_3[3] = 0;
    }
  }
  return uVar8;
}

