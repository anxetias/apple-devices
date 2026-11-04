// name: FUN_10036389b
// address: 10036389b

undefined1 FUN_10036389b(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  uint local_3a;
  undefined2 uStack_36;
  ushort uStack_34;
  undefined2 uStack_32;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100363a3d:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 0x7c4c80;
      uStack_36 = 1;
      uStack_34 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = 0x7b2d50;
        uStack_36 = 1;
        uStack_34 = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100363a3d;
    }
    if (param_2 == (int *)0x0) {
LAB_100363a61:
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 0x7c4c9c;
        uStack_36 = 1;
        uStack_34 = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (*param_2 != 0x706c7374) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = 0x7b2d50;
          uStack_36 = 1;
          uStack_34 = 0;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar2 = FUN_1001782e9(0,1);
        if (cVar2 == '\0') goto LAB_100363a61;
      }
      cVar2 = FUN_1004887bb(param_1);
      if (((cVar2 != '\0') &&
          (bVar1 = *(byte *)(param_2 + 0x10e), bVar1 != *(byte *)(param_1 + 0x10e))) &&
         (bVar1 != *(byte *)((long)param_2 + 0x439))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar2 != '\0') {
          FUN_100486ef1(local_58,param_1);
          local_44 = (char *)FUN_1001b83ae(local_58);
          local_48 = 0x8220302;
          local_3c = 0x400;
          local_3a = (uint)bVar1;
          uStack_36 = 0x400;
          uStack_34 = (ushort)*(byte *)((long)param_2 + 0x439);
          uStack_32 = 0;
          __os_log_impl(0x100000000,uVar4,2,
                        "sync>  setting liked state of library playlist \"%{public}s\" to %u, was %u"
                        ,&local_48,0x18);
          FUN_1001b7a50(local_58);
        }
        *(byte *)(param_1 + 0x10e) = bVar1;
        param_1[0x10f] = param_2[0x10f];
        *(byte *)((long)param_1 + 0x439) = bVar1;
        *(byte *)((long)param_2 + 0x439) = bVar1;
        FUN_1004874fd(param_1,0x20);
        uVar3 = 1;
        goto LAB_100363a89;
      }
    }
  }
  uVar3 = 0;
LAB_100363a89:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

