// name: FUN_1002bcc67
// address: 1002bcc67

undefined1 FUN_1002bcc67(short *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (short *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_6a = "presetMetaName != nullptr";
LAB_1002bcee2:
      local_6c = 0x822;
      local_74 = "Assertion failure";
      local_78 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_78,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      if (DAT_1008bbf00 == '\0') {
        puVar4 = &DAT_1007409f0;
        piVar7 = &DAT_100740574;
        lVar6 = 0;
        do {
          FUN_1001c34b7(piVar7[-1],(long)&DAT_1008b5c00 + lVar6);
          if (*(short *)((long)&DAT_1008b5c00 + lVar6) == 0) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_78 = 0x8220202;
              local_74 = "Assertion failure";
              local_6c = 0x822;
              local_6a = "curInfo->presetName[0] != 0";
              __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_78,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (*piVar7 != 0) {
              FUN_1001c34b7(*piVar7,&DAT_1008b5e00 + lVar6);
            }
            FUN_1001e1b6d(*puVar4,&local_78);
            puVar5 = &DAT_1008b6000 + lVar6;
            FUN_1001e1c39(&DAT_100740a1c,puVar5);
            FUN_1001e1890(&local_78,puVar5);
            FUN_1001e1890(&DAT_100740a1c,puVar5);
          }
          lVar6 = lVar6 + 0x480;
          puVar4 = puVar4 + 1;
          piVar7 = piVar7 + 0xd;
        } while (lVar6 != 0x6300);
        DAT_1008bbf00 = '\x01';
      }
      if (*param_1 != 0) {
        puVar4 = &DAT_1008b5c00;
        lVar6 = 0x16;
        do {
          cVar1 = FUN_1001e3edc(param_1,puVar4 + 0x200,0);
          if (cVar1 != '\0') {
            FUN_1001e1c39(puVar4,param_2);
            uVar3 = 1;
            goto LAB_1002bce9c;
          }
          puVar4 = puVar4 + 0x240;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      FUN_1001e1c39(param_1,param_2);
      uVar3 = 0;
      goto LAB_1002bce9c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_6a = "presetName != nullptr";
      goto LAB_1002bcee2;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1002bce9c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

