// name: FUN_1004fbedb
// address: 1004fbedb

void FUN_1004fbedb(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined2 local_238;
  undefined1 local_236 [518];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x822;
      local_64a = "JRFileSpecIsValid(&trackInstance->location->file.spec)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (**(int **)(param_1 + 0x80) == 0x41464350) {
    cVar1 = FUN_10017fbfb();
    if (cVar1 != '\0') {
      iVar2 = FUN_1001888ba(*(undefined8 *)(param_1 + 0x80),"iTunesArtwork",0,0);
      if (iVar2 == -0x2b) {
        if (param_2 == 0) {
          lVar4 = FUN_1002f19e7(*(undefined8 *)(param_1 + 0x80));
        }
        else {
          lVar4 = FUN_1001705fc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98));
        }
        if (lVar4 != 0) {
          cVar1 = FUN_100166ce2(lVar4,PTR_cf_cover_image_path_100853680,&local_238);
          if (cVar1 != '\0') {
            FUN_1001dfe75(&local_238,0x2f,0x2f);
            iVar2 = FUN_10017d64f(*(undefined8 *)(param_1 + 0x80),local_236,local_238,&local_658,0,0
                                 );
            if (iVar2 == -0x80) goto LAB_1004fc07c;
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_678 = 0x8220202;
                local_674 = "Assertion failure";
                local_66c = 0x400;
                local_66a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_678,0x12
                                   );
              }
              if (iVar2 != 0) goto LAB_1004fc07c;
            }
            iVar2 = FUN_10018a31e(&local_658,*(undefined8 *)(param_1 + 0x80),"iTunesArtwork",0);
            if (iVar2 == -0x80) goto LAB_1004fc07c;
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_678 = 0x8220202;
                local_674 = "Assertion failure";
                local_66c = 0x400;
                local_66a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_678,0x12
                                   );
              }
              if (iVar2 != 0) goto LAB_1004fc07c;
            }
          }
        }
        FUN_10017060f(lVar4);
      }
    }
  }
LAB_1004fc07c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

