// name: FUN_1002bd466
// address: 1002bd466

void FUN_1002bd466(long param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_4b8;
  char *local_4b4;
  undefined2 local_4ac;
  int local_4aa;
  undefined1 local_470 [4];
  undefined4 local_46c;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar4 = *(long *)(param_1 + 8), lVar4 == 0)) ||
     (*(long *)(lVar4 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1004744bf(lVar4,0);
    if (((uVar2 & 0x818000) == 0x800000) &&
       ((lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x98), lVar4 == 0 ||
        (lVar4 = FUN_100171475(lVar4,PTR_cf_file_hash_1008536a8), lVar4 == 0)))) {
      if (param_2 == (void *)0x0) {
        iVar3 = FUN_1002b4324(param_1,&local_448);
        if (iVar3 != 0) goto LAB_1002bd604;
      }
      else {
        _memcpy(&local_448,param_2,0x420);
      }
      local_470[0] = 0;
      local_46c = 0;
      iVar3 = FUN_100179fcc(&local_448,1);
      if (iVar3 != -0x80) {
        if (iVar3 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_4b8 = 0x8220202;
            local_4b4 = "Assertion failure";
            local_4ac = 0x400;
            local_4aa = iVar3;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
          }
          if (iVar3 != 0) goto LAB_1002bd604;
        }
        FUN_1002af0ff(param_1);
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
        if (lVar4 == 0) {
          lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (lVar4 == 0) goto LAB_1002bd604;
          *(long *)(*(long *)(param_1 + 0x10) + 0x98) = lVar4;
        }
        FUN_100179ae2(local_470,&local_4b8,0,0x40);
        FUN_10016843e(lVar4,PTR_cf_file_hash_1008536a8,&local_4b8,0);
        FUN_1002fef76(*(undefined8 *)(param_1 + 8));
      }
    }
  }
LAB_1002bd604:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

