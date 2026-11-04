// name: FUN_10043cd8a
// address: 10043cd8a

int FUN_10043cd8a(undefined8 param_1,long param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 local_188;
  char *local_184;
  undefined2 local_17c;
  undefined2 uStack_17a;
  undefined6 local_178;
  undefined2 uStack_172;
  undefined8 local_170;
  long *local_168;
  code *local_160;
  undefined4 local_158;
  long local_150;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_3 == 10) {
    if ((short)param_3[3] == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_188 = 0x8220202;
        local_184 = "Assertion failure";
        local_17c = 0x822;
        uStack_17a = 0xe680;
        local_178 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_188,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (param_3[0x23] != 0) {
        if (DAT_1008c7680 != (undefined8 *)0x0) {
          iVar4 = -0x32;
          puVar5 = DAT_1008c7680;
          do {
            cVar3 = FUN_1001e3edc(param_3 + 3,puVar5 + 8,0);
            if ((cVar3 != '\0') && ((param_2 == 0 || (puVar5[2] != param_2)))) goto LAB_10043cf83;
            puVar5 = (undefined8 *)*puVar5;
          } while (puVar5 != (undefined8 *)0x0);
          if (DAT_1008c7680 != (undefined8 *)0x0) {
            iVar4 = -0x32;
            puVar5 = DAT_1008c7680;
            do {
              if ((*(int *)(puVar5 + 0x18) == param_3[0x23]) &&
                 ((param_2 == 0 || (puVar5[2] != param_2)))) goto LAB_10043cf83;
              puVar5 = (undefined8 *)*puVar5;
            } while (puVar5 != (undefined8 *)0x0);
          }
        }
        plVar6 = (long *)FUN_1001c6429(0xd0);
        if (plVar6 == (long *)0x0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_188 = 0x8220202;
            local_184 = "Assertion failure";
            local_17c = 0x822;
            uStack_17a = 0xe6f1;
            local_178 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_188,0x16);
          }
          FUN_1001782e9(0,0);
          iVar4 = -0x6c;
        }
        else {
          *(undefined4 *)(plVar6 + 1) = 0x706c6179;
          plVar6[2] = param_2;
          plVar6[6] = *(long *)(param_3 + 0x25);
          plVar6[7] = *(long *)(param_3 + 0x27);
          *(int *)(plVar6 + 0x18) = param_3[0x23];
          FUN_1001e3c85(param_3 + 3,plVar6 + 8,0x3f);
          *(int *)(plVar6 + 0x19) = param_3[0x24];
          puVar5 = DAT_1008c7680;
          if (*plVar6 != 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_188 = 0x8220202;
              local_184 = "Assertion failure";
              local_17c = 0x822;
              uStack_17a = 0x4952;
              local_178 = 0x1007a;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_188,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if (puVar5 == (undefined8 *)0x0) {
            puVar8 = &DAT_1008c7680;
          }
          else {
            do {
              puVar8 = puVar5;
              puVar5 = (undefined8 *)*puVar8;
            } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
          }
          *plVar6 = 0;
          *puVar8 = plVar6;
          ___bzero(&local_188,0x148);
          local_170 = 0x90000000a;
          local_160 = FUN_10043d25b;
          plVar6[3] = (long)FUN_10043d25b;
          local_150 = plVar6[7];
          local_168 = plVar6;
          iVar4 = FUN_10043a8b3(plVar6,0x696e6974,&local_188);
          if (iVar4 == 0) {
            *(undefined1 *)((long)plVar6 + 0xc) = 1;
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
            *(undefined4 *)((long)plVar6 + 0xc4) = local_158;
            plVar6[7] = local_150;
          }
          else {
            FUN_10043d266(plVar6);
          }
          plVar6 = (long *)CONCAT26(uStack_172,local_178);
          if (plVar6 != (long *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        goto LAB_10043cf83;
      }
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_188 = 0x8220202;
        local_184 = "Assertion failure";
        local_17c = 0x822;
        uStack_17a = 0xe6b8;
        local_178 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_188,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_188 = 0x8220202;
      local_184 = "Assertion failure";
      local_17c = 0x822;
      uStack_17a = 0x91c4;
      local_178 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_188,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x32;
LAB_10043cf83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

