// name: FUN_1001cef36
// address: 1001cef36

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cef36(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    auVar1._8_8_ = in_stack_00000010;
    auVar1._0_8_ = in_stack_00000008;
    auVar2._8_8_ = in_stack_00000020;
    auVar2._0_8_ = in_stack_00000018;
    if (auVar2 != _DAT_1008a2350 || auVar1 != _DAT_1008a2340) {
      cVar3 = _CFURLGetFileSystemRepresentation(param_1,1,local_428,0x401);
      if (cVar3 != '\0') {
        pcVar5 = (char *)_sandbox_extension_issue_file_to_process(param_2,local_428,0);
        goto LAB_1001cf005;
      }
    }
  }
  else {
    cVar3 = _CFURLGetFileSystemRepresentation(param_1,1,local_428,0x401);
    if (cVar3 != '\0') {
      pcVar5 = (char *)_sandbox_extension_issue_file(param_2,local_428,0);
LAB_1001cf005:
      if (pcVar5 != (char *)0x0) {
        sVar6 = _strlen(pcVar5);
        uVar7 = _CFDataCreate(0,pcVar5,sVar6 + 1);
        _free(pcVar5);
        goto LAB_1001cf076;
      }
      piVar8 = ___error();
      iVar4 = FUN_1001eb020(*piVar8);
      uVar7 = 0;
      if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1001cf076;
      uVar7 = FUN_1001cc310();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        FUN_1006afceb(iVar4,uVar7);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    }
  }
  uVar7 = 0;
LAB_1001cf076:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

