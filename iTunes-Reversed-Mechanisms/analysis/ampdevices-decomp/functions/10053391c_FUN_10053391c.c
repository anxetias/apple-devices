// name: FUN_10053391c
// address: 10053391c

undefined8 FUN_10053391c(int param_1,long param_2,undefined1 param_3,long param_4,char *param_5)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  char *pcVar4;
  char local_288 [80];
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0x80) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_22a = "inMediaDomain != MediaDomains::eITunes";
LAB_100533abd:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_22a = "libraryBundleSpec != nullptr";
      goto LAB_100533abd;
    }
  }
  else {
    if (param_4 != 0) {
      local_238 = local_238 & 0xffff0000;
      bVar3 = (char)param_1 - 1;
      uVar2 = 0xffffffce;
      if ((bVar3 < 8) && ((0x8bU >> (bVar3 & 0x1f) & 1) != 0)) {
        FUN_1001e04f5(&DAT_100755ad8 + *(int *)(&DAT_100755ad8 + (ulong)bVar3 * 4),&local_238);
        pcVar4 = local_288;
        if (param_5 != (char *)0x0) {
          pcVar4 = param_5;
        }
        uVar2 = FUN_100188c55(param_2,&local_238,param_3,param_4,pcVar4);
        if (((int)uVar2 == 0) && (uVar2 = 0xfffffaea, *pcVar4 == '\0')) {
          uVar2 = 0;
        }
      }
      goto LAB_100533af0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_22a = "outDBFileSpec != nullptr";
      goto LAB_100533abd;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100533af0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

