// name: FUN_10015d000
// address: 10015d000

int FUN_10015d000(long param_1,long *param_2,long param_3,uint *param_4,code *param_5,
                 undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long local_50;
  undefined8 local_48;
  uint *local_40;
  int local_38;
  int local_34;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066cfa3(uVar3);
    }
  }
  else if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066cf2d(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066ceb7(uVar3);
    }
  }
  else {
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar5 = **(uint **)(param_1 + 0x20);
        if (param_3 - *param_2 <
            (long)(int)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_10066cdcb(uVar3);
          }
          goto LAB_10015d199;
        }
        FUN_1001c631b();
        puVar4 = (uint *)*param_2;
      }
      else {
        local_34 = 0;
        uVar5 = 8;
        local_48 = param_6;
        local_40 = param_4;
        if (param_5 != (code *)0x0) {
          iVar2 = (*param_5)(param_1,param_6,&local_34);
          if (iVar2 == 0) {
            uVar5 = local_34 + 8;
          }
          else if (iVar2 < 1) {
            if (iVar2 == -0x80) {
              return -0x80;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') {
              return iVar2;
            }
            FUN_10066ccf3(iVar2,uVar3);
            return iVar2;
          }
        }
        FUN_1001c631b(*(undefined8 *)(param_1 + 0x20),*param_2,(long)(int)uVar5);
        puVar4 = (uint *)*param_2;
        *puVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        local_50 = (long)(int)uVar5 + (long)puVar4;
        for (puVar6 = *(undefined8 **)(param_1 + 0x10); param_4 = local_40,
            puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
          iVar2 = FUN_10015d000(puVar6,&local_50,param_3,&local_38,param_5,local_48);
          if (iVar2 != 0) {
            if (iVar2 == -0x80) {
              return -0x80;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') {
              return iVar2;
            }
            FUN_10066cd5f(iVar2,uVar3);
            return iVar2;
          }
          puVar4 = (uint *)*param_2;
          uVar5 = *puVar4;
          uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)
                  + local_38;
          *puVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                    uVar5 * 0x1000000;
        }
      }
      uVar5 = *puVar4;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      *param_4 = uVar5;
      *param_2 = (long)(int)uVar5 + (long)puVar4;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066ce41(uVar3);
    }
  }
LAB_10015d199:
  FUN_1001782e9(0,0);
  return -0x32;
}

