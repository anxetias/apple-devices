// name: FUN_1005d5016
// address: 1005d5016

ulong FUN_1005d5016(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  short sVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "params != nullptr";
LAB_1005d5227:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005d50fb:
    FUN_1001782e9(0,0);
    sVar6 = 2;
  }
  else {
    if (*param_1 != 0x70667077) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = "params->magic == kPromptForPasswordParamsMagic";
        goto LAB_1005d5227;
      }
      goto LAB_1005d50fb;
    }
    cVar1 = FUN_1001b8428(param_1 + 10);
    if (cVar1 != '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = "params->message.IsEmpty() == false";
        goto LAB_1005d5227;
      }
      goto LAB_1005d50fb;
    }
    cVar1 = FUN_1001b8428(param_1 + 0x16);
    if (cVar1 != '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = "params->okButtonString.IsEmpty() == false";
        goto LAB_1005d5227;
      }
      goto LAB_1005d50fb;
    }
    if (((*(char *)((long)param_1 + 0x10e) != '\0') && ((char)param_1[0x44] != '\0')) &&
       (*(char *)((long)param_1 + 0x11a) == '\0')) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = 
        "params->hideUserName == false || params->hidePassword == false || params->showPopupMenu";
        goto LAB_1005d5227;
      }
      goto LAB_1005d50fb;
    }
    cVar1 = FUN_1001edfc7();
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar4 = FUN_100243534(param_1);
        return uVar4;
      }
      goto LAB_1005d53f8;
    }
    puVar5 = (undefined8 *)FUN_1001c6429(0x40);
    if (puVar5 == (undefined8 *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "delayedInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      sVar6 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      *puVar5 = param_1;
      cVar1 = FUN_1001ee056();
      *(char *)((long)puVar5 + 10) = cVar1;
      if (cVar1 == '\0') {
        iVar2 = FUN_1001e8dd6(puVar5 + 4,0,0);
      }
      else {
        iVar2 = FUN_1001e96d3((long)puVar5 + 0xc,0,0);
      }
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1005d53fd(FUN_1005d54d0,puVar5);
          if (*(char *)((long)puVar5 + 10) == '\0') {
            FUN_1001e944c(puVar5 + 4);
            FUN_1001e9587(puVar5 + 4);
          }
          else {
            FUN_1001e9afc((long)puVar5 + 0xc);
            FUN_1001e9bb5((long)puVar5 + 0xc);
          }
          sVar6 = *(short *)(puVar5 + 1);
          FUN_1001c64c1(puVar5);
          goto LAB_1005d5109;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      FUN_1001c64c1(puVar5);
      sVar6 = 0;
    }
  }
LAB_1005d5109:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return (ulong)(uint)(int)sVar6;
  }
LAB_1005d53f8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

