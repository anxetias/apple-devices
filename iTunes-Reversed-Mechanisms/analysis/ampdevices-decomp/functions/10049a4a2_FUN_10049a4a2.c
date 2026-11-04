// name: FUN_10049a4a2
// address: 10049a4a2

long * FUN_10049a4a2(long param_1,uint param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
LAB_10049a65e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    plVar3 = (long *)FUN_1001c58d5(*(undefined8 *)(param_1 + 0x68));
    if (plVar3 != (long *)0x0) {
      plVar3[1] = param_1;
      uVar5 = *(uint *)(param_1 + 0x44);
      if (param_2 == 0) {
        *(uint *)(param_1 + 0x44) = uVar5 + 1;
      }
      else {
        bVar1 = uVar5 <= param_2;
        uVar5 = param_2;
        if (bVar1) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "recordID < imageLibrary->nextRecordID";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      *(uint *)(plVar3 + 3) = uVar5;
      puVar6 = (undefined8 *)(param_1 + 0x28);
      if (param_3 == '\0') {
        puVar7 = (undefined8 *)*puVar6;
        if (*plVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "element->*PNEXT == nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          puVar6 = puVar7;
        }
        *plVar3 = 0;
        *puVar6 = plVar3;
      }
      else {
        FUN_10049c923(puVar6,plVar3);
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      FUN_100496a4d(param_1);
      *(undefined1 *)(param_1 + 4) = 1;
      goto LAB_10049a614;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "album != nullptr";
      goto LAB_10049a65e;
    }
  }
  plVar3 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_10049a614:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

