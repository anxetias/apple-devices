// name: FUN_1003b9558
// address: 1003b9558

int FUN_1003b9558(long param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined2 local_12c;
  int local_12a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    FUN_10015805a(&local_138);
    local_138 = 0x854ac0;
    uStack_134 = 1;
    FUN_100159294(local_158,&local_138,PTR_cf_encoderName_100854aa0);
    iVar4 = -0x32;
    puVar6 = DAT_1008c75b0;
    if (DAT_1008c75b0 == (undefined8 *)0x0) {
      bVar1 = false;
    }
    else {
      local_13c = param_2;
      do {
        FUN_1001b7b34(local_168,(long)puVar6 + 0x39,*(undefined1 *)(puVar6 + 7));
        iVar3 = FUN_1001b9c66(local_158,local_168);
        if (iVar3 == 0) {
          FUN_1001b7a50(local_168);
          iVar4 = 0;
          bVar1 = true;
          param_2 = local_13c;
          goto LAB_1003b970c;
        }
        puVar6 = (undefined8 *)*puVar6;
        FUN_1001b7a50(local_168);
      } while (puVar6 != (undefined8 *)0x0);
      param_2 = local_13c;
      if (DAT_1008c75b0 == (undefined8 *)0x0) {
        bVar1 = false;
      }
      else {
        iVar4 = 0;
        puVar7 = DAT_1008c75b0;
        do {
          bVar1 = true;
          puVar6 = puVar7;
          if (*(char *)((long)puVar7 + 0x299) != '\0') break;
          puVar7 = (undefined8 *)*puVar7;
          puVar6 = DAT_1008c75b0;
        } while (puVar7 != (undefined8 *)0x0);
      }
    }
LAB_1003b970c:
    FUN_1001b7a50(local_158);
    FUN_10015811a(&local_138);
    if (!bVar1) goto LAB_1003b977a;
  }
  else {
    puVar6 = &DAT_1008c75b0;
    do {
      puVar6 = (undefined8 *)*puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        iVar4 = -0x32;
        if (cVar2 == '\0') goto LAB_1003b977a;
        local_12a = -0x32;
        iVar4 = local_12a;
        goto LAB_1003b97d0;
      }
      cVar2 = FUN_1001df6e9(param_1,puVar6 + 7,0);
    } while (cVar2 == '\0');
  }
  iVar4 = FUN_1003b8d07(puVar6,&local_148);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      iVar4 = FUN_1003b7eba(local_148,param_2,param_3);
      FUN_1003b92bd(puVar6);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
LAB_1003b97d0:
        local_12a = iVar4;
        iVar4 = local_12a;
        local_12c = 0x400;
        uStack_130 = 1;
        uStack_134 = 0x7a0a90;
        local_138 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_138,0x12);
      }
    }
  }
LAB_1003b977a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

