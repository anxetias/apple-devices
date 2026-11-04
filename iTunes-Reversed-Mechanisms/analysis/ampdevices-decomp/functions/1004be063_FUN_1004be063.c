// name: FUN_1004be063
// address: 1004be063

void FUN_1004be063(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_460 [2];
  int *local_458;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7798 != (int *)0x0) {
    iVar3 = FUN_1004af470();
    piVar1 = DAT_1008c7798;
    if ((iVar3 == param_1) && (DAT_1008c7798 != (int *)0x0)) {
      LOCK();
      *DAT_1008c7798 = *DAT_1008c7798 + 1;
      UNLOCK();
      if (piVar1[1] != 0x646f776e) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_448 = 0x8220202;
          local_444 = "Assertion failure (expected to be true)";
          local_43c = 0x822;
          local_43a = "(downloadManager)->magic == \'down\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
        }
        cVar2 = FUN_1001782e9(0,1);
        if (cVar2 == '\0') goto LAB_1004be157;
      }
      cVar2 = FUN_1001c19cd();
      if (cVar2 == '\0') {
        iVar3 = FUN_100534ba4(piVar1 + 0x6a,0,&local_448);
        if (iVar3 == 0) {
          FUN_1001c62d9(local_460,0x18);
          local_460[0] = 0x64636466;
          local_458 = piVar1;
          FUN_10017fdd8(&local_448,1,1,FUN_1004bf92f,local_460);
        }
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_1004ada4f(piVar1);
      }
      goto LAB_1004be179;
    }
  }
LAB_1004be157:
  uVar4 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    local_448 = 0x8220202;
    local_444 = "Assertion failure";
    local_43c = 0x822;
    local_43a = 
    "( ((downloadManager) != __null) && (((downloadManager)->magic == \'down\') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"(downloadManager)->magic == \'down\'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/iTunes/Application/DownloadManager.cpp\", 11335, true)) )"
    ;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1004be179:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

