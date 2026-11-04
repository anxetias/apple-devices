// name: FUN_1005735f8
// address: 1005735f8

/* WARNING: Removing unreachable block (ram,0x00010057382f) */
/* WARNING: Removing unreachable block (ram,0x000100573848) */

ulong FUN_1005735f8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long local_88;
  long local_78;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = (**(code **)(*param_1 + 0xe0))();
  if (cVar1 == '\0') {
LAB_1005737e5:
    uVar5 = 0;
    goto LAB_10057389c;
  }
  uVar5 = 0;
  if (sRam000000000000000c != 0x100) goto LAB_10057389c;
  uVar6 = uRam0000000000000008 >> 0x18 | (uRam0000000000000008 & 0xff0000) >> 8 |
          (uRam0000000000000008 & 0xff00) << 8 | uRam0000000000000008 << 0x18;
  if ((uVar6 < 0x10) ||
     ((uRam0000000000000000 >> 0x18 | (uRam0000000000000000 & 0xff0000) >> 8 |
       (uRam0000000000000000 & 0xff00) << 8 | uRam0000000000000000 << 0x18) <= uVar6))
  goto LAB_10057389c;
  if ((ulong)uVar6 == 0xfffffffffffffff8) {
    local_60 = 0;
    local_68 = 0;
    local_78 = 0;
    local_88 = 0;
    if ((uRamfffffffffffffff8 != 0) &&
       ((uRamfffffffffffffff8 >> 0x18 | (uRamfffffffffffffff8 & 0xff0000) >> 8 |
         (uRamfffffffffffffff8 & 0xff00) << 8 | uRamfffffffffffffff8 << 0x18) < 9)) {
      if (iRamfffffffffffffffc == 0x666e6973) {
        local_88 = -8;
      }
      else if ((iRamfffffffffffffffc == 0x44495555) &&
              (cVar1 = FUN_1001c5630(0,&DAT_1007403f0,0x10), cVar1 != '\0')) {
        local_68 = -8;
      }
      else if (iRamfffffffffffffffc == 0x666e6970) {
        local_78 = -8;
      }
      else if (iRamfffffffffffffffc == 0x65657266) {
        local_60 = -8;
      }
      if (local_88 != 0) {
        local_78 = local_88;
      }
      if (local_68 != 0 || local_78 != 0) {
        lVar4 = (**(code **)(*param_1 + 0x70))(param_1,*param_2);
        if (local_78 == 0) {
          uVar5 = 0;
        }
        else {
          uVar6 = FUN_100570eff(local_78,(local_78 - lVar4) + *param_2,param_2[1],param_3);
          uVar5 = (ulong)uVar6;
        }
        if (local_68 != 0) {
          bVar2 = FUN_100570eff(local_68,(local_68 - lVar4) + *param_2,param_2[1],param_4);
          uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 | bVar2);
        }
        if ((param_5 != 0) && (local_60 != 0)) {
          bVar2 = FUN_100570eff(local_60,(local_60 - lVar4) + *param_2,param_2[1],param_5);
          uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 | bVar2);
        }
        goto LAB_10057389c;
      }
      goto LAB_1005737e5;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "atomSize != 0 && (atomSize <= (end - beg))";
      goto LAB_10057386c;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "inDescSize >= (offsetToExtensions + sizeof(AtomHeader))";
LAB_10057386c:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_10057389c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

