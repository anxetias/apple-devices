// name: FUN_100400ad6
// address: 100400ad6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100400ad6(long param_1,ulong param_2,undefined8 param_3)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b811c(param_3);
  local_48 = 0x10;
  uStack_44 = 0;
  iVar3 = FUN_100160380(*(undefined8 *)(param_1 + 0x100000),&local_48,&local_58);
  if (iVar3 == -0x80) goto LAB_100400cdf;
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x100127) == '\0') {
      uVar4 = local_58._4_4_;
    }
    else {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_58;
      auVar7 = pshufb(auVar7,_DAT_100718a70);
      local_58 = auVar7._0_8_;
      uVar4 = auVar7._4_4_;
    }
    iVar3 = FUN_1003f0368(param_1,param_1,uVar4);
    if (iVar3 == -0x80) goto LAB_100400cdf;
    if (iVar3 == 0) {
      if ((int)local_58 == 1) {
        if (1 < local_58._4_4_ && *(char *)(param_1 + 0x100127) != '\0') {
          uVar6 = 0;
          do {
            puVar1 = (ushort *)(param_1 + uVar6 * 2);
            *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
            uVar6 = uVar6 + 1;
          } while (local_58._4_4_ >> 1 != uVar6);
        }
        if ((param_2 & 1) != 0) {
          FUN_100184d94(param_1,local_58._4_4_ >> 1);
        }
        FUN_1001b7e14(&local_48,param_1,local_58._4_4_ >> 1);
        FUN_1001b80b2(param_3,&local_48);
        FUN_1001b7a50(&local_48);
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        if ((local_58 & 0xfffffffd) == 0) {
          if ((param_2 & 1) != 0) {
            FUN_100184ee6(param_1,local_58._4_4_);
          }
          FUN_1001b7b34(&local_48,param_1,local_58._4_4_);
          FUN_1001b80b2(param_3,&local_48);
          FUN_1001b7a50(&local_48);
        }
      }
      goto LAB_100400cdf;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
  }
  if (cVar2 != '\0') {
    local_3c = 0x400;
    uStack_40 = 1;
    uStack_44 = 0x7a0a90;
    local_48 = 0x8220202;
    local_3a = iVar3;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_100400cdf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

