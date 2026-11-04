// name: FUN_100300c1d
// address: 100300c1d

void FUN_100300c1d(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar2 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_22a = "TrackInstanceIsValid(sourceTrackInstance)";
LAB_100300e33:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) &&
       (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 != 0)) {
      if ((**(byte **)(param_1 + 0x10) & 1) != 0) {
        FUN_1002af0ff(param_2);
        if ((param_3 & 1) == 0) {
          FUN_100300f72(param_1,&local_238);
          FUN_100301119(param_2,&local_238);
          FUN_1001de586(lVar2 + 0x22a0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x6c),
                        lVar3 + 0x22a0,*(long *)(param_2 + 0x10) + 0x6c);
          FUN_1001de586(lVar2 + 0x22f0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70),
                        lVar3 + 0x22f0,*(long *)(param_2 + 0x10) + 0x70);
          FUN_1001de586(lVar2 + 0x2390,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x74),
                        lVar3 + 0x2390,*(long *)(param_2 + 0x10) + 0x74);
          FUN_1001de586(lVar2 + 0x23e0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x78),
                        lVar3 + 0x23e0,*(long *)(param_2 + 0x10) + 0x78);
          FUN_1001de586(lVar2 + 0x2390,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x7c),
                        lVar3 + 0x2390,*(long *)(param_2 + 0x10) + 0x7c);
          iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x80);
        }
        else {
          lVar6 = *(long *)(param_1 + 0x10);
          if (*(int *)(lVar6 + 0x68) != 0) {
            FUN_100300f72(param_1,&local_238);
            FUN_100301119(param_2,&local_238);
            lVar6 = *(long *)(param_1 + 0x10);
          }
          if (*(int *)(lVar6 + 0x6c) != 0) {
            FUN_1001de586(lVar2 + 0x22a0,*(int *)(lVar6 + 0x6c),lVar3 + 0x22a0,
                          *(long *)(param_2 + 0x10) + 0x6c);
            lVar6 = *(long *)(param_1 + 0x10);
          }
          if (*(int *)(lVar6 + 0x70) != 0) {
            FUN_1001de586(lVar2 + 0x22f0,*(int *)(lVar6 + 0x70),lVar3 + 0x22f0,
                          *(long *)(param_2 + 0x10) + 0x70);
            lVar6 = *(long *)(param_1 + 0x10);
          }
          if (*(int *)(lVar6 + 0x74) != 0) {
            FUN_1001de586(lVar2 + 0x2390,*(int *)(lVar6 + 0x74),lVar3 + 0x2390,
                          *(long *)(param_2 + 0x10) + 0x74);
            lVar6 = *(long *)(param_1 + 0x10);
          }
          if (*(int *)(lVar6 + 0x78) != 0) {
            FUN_1001de586(lVar2 + 0x23e0,*(int *)(lVar6 + 0x78),lVar3 + 0x23e0,
                          *(long *)(param_2 + 0x10) + 0x78);
            lVar6 = *(long *)(param_1 + 0x10);
          }
          if (*(int *)(lVar6 + 0x7c) != 0) {
            FUN_1001de586(lVar2 + 0x2390,*(int *)(lVar6 + 0x7c),lVar3 + 0x2390,
                          *(long *)(param_2 + 0x10) + 0x7c);
            lVar6 = *(long *)(param_1 + 0x10);
          }
          iVar1 = *(int *)(lVar6 + 0x80);
          if (iVar1 == 0) goto LAB_100300da4;
        }
        FUN_1001de586(lVar2 + 0x23e0,iVar1,lVar3 + 0x23e0,*(long *)(param_2 + 0x10) + 0x80);
      }
      goto LAB_100300da4;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_22a = "TrackInstanceIsValid(destTrackInstance)";
      goto LAB_100300e33;
    }
  }
  FUN_1001782e9(0,0);
LAB_100300da4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

