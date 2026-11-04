// name: FUN_10057107e
// address: 10057107e

uint FUN_10057107e(long *param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = param_2[4];
  uStack_74 = param_2[5];
  uStack_70 = param_2[6];
  uStack_6c = param_2[7];
  local_68 = *(ulong *)(param_2 + 8);
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x6d646961,&local_88,0,&local_60);
  if (cVar1 != '\0') {
    local_68 = local_40;
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_88 = local_60;
    uStack_84 = uStack_5c;
    uStack_80 = uStack_58;
    uStack_7c = uStack_54;
    uVar4 = 0;
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x68646c72,&local_88,0);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x70))(param_1,CONCAT44(uStack_44,uStack_48));
      if (local_40 < 0xc) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = 
          "(currentAtomInfo.atomDataSize >= __builtin_offsetof(PublicHandlerInfo, componentManufacturer))"
          ;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        uVar4 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        uVar4 = *(uint *)(lVar2 + 8);
        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

