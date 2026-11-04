// name: FUN_10050523c
// address: 10050523c

undefined1 FUN_10050523c(void)

{
  bool bVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  long *local_80;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1004de449();
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xde6a;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(lVar4 + 0x37c) != '\0') {
    local_58 = (long *)&local_50;
    local_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    uStack_48 = 0;
    uStack_42 = 0;
    lVar5 = FUN_1002f9fc5(*(undefined8 *)(lVar4 + 0x30));
    bVar1 = false;
    while (lVar5 != 0) {
      cVar3 = FUN_1002bdac0(lVar5,1,0,0,0);
      if (cVar3 != '\0') {
        if (!bVar1) {
          uVar6 = FUN_1004e0c3f(lVar4,1);
          FUN_1002b1d9f(&local_80,uVar6);
          FUN_1002a41f4(&local_58,CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)));
          local_50 = (undefined4)local_78;
          uStack_4c = (undefined2)((ulong)local_78 >> 0x20);
          uStack_4a = (undefined2)((ulong)local_78 >> 0x30);
          uStack_48 = (undefined6)lStack_70;
          uStack_42 = (undefined2)((ulong)lStack_70 >> 0x30);
          if (lStack_70 == 0) {
            local_58 = (long *)&local_50;
            plVar2 = local_80;
          }
          else {
            *(undefined4 **)(local_78 + 0x10) = &local_50;
            local_78 = 0;
            lStack_70 = 0;
            plVar2 = &local_78;
            local_58 = local_80;
          }
          local_80 = plVar2;
          FUN_1002a41f4(&local_80,local_78);
        }
        if ((*(long *)(lVar5 + 8) == 0) || (*(long *)(*(long *)(lVar5 + 8) + 0x10) == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x38);
        }
        lVar7 = FUN_1002b231f(&local_58,uVar6,0,1,*(undefined2 *)(*(long *)(lVar5 + 0x18) + 2),2,0,0
                             );
        bVar1 = true;
        if (lVar7 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          uVar8 = 1;
          if (cVar3 != '\0') {
            FUN_100476ac1(&local_80,*(undefined8 *)(lVar5 + 8));
            local_64 = FUN_1001b83ae(&local_80);
            local_68 = 0x8220102;
            __os_log_impl(0x100000000,uVar6,1,"found device purchased track \"%{public}s\"",
                          &local_68,0xc);
            FUN_1001b7a50(&local_80);
          }
          goto LAB_100505437;
        }
      }
      lVar5 = FUN_1002fa118(lVar5);
    }
    uVar8 = 0;
LAB_100505437:
    FUN_1002a41f4(&local_58,CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)));
    goto LAB_100505444;
  }
  uVar8 = 0;
LAB_100505444:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

