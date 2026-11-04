// name: FUN_10048ee0a
// address: 10048ee0a

void FUN_10048ee0a(int param_1,long param_2,ulong param_3,undefined8 param_4,int *param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_b0;
  undefined8 local_a8;
  char local_99;
  int local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined2 uStack_8a;
  int iStack_88;
  undefined2 uStack_84;
  undefined **local_68 [4];
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a8 = param_4;
  if (param_5 == (int *)0x0) {
LAB_10048eec6:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      uStack_8a = 0xa159;
      iStack_88 = 0x1007b;
      uStack_84 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10048f4b5;
  }
  if (*param_5 != 0x706c7374) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure (expected to be true)";
      local_8c = 0x822;
      uStack_8a = 0x2d50;
      iStack_88 = 0x1007b;
      uStack_84 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_10048eec6;
  }
  lVar6 = param_2;
  piVar7 = param_5;
  if (param_1 < 0x68747269) {
    if (param_1 < 0x6174726e) {
      if (param_1 == 0x414c6163) {
        FUN_1001c6987(param_5 + 0x32,0x414c6163,param_2,param_3,local_a8);
      }
      else if (param_1 == 0x414c6d66) {
        if ((((param_3 & 0x10) != 0) && (*(long *)(param_5 + 0xd8) != 0)) &&
           (cVar2 = FUN_10053916d(param_5 + 0xda,0x9c), cVar2 != '\0')) {
          if (param_2 == 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_98 = 0x8220202;
              local_94 = "Assertion failure (expected to be not NULL)";
              local_8c = 0x822;
              uStack_8a = 0xc1c5;
              iStack_88 = 0x1007b;
              uStack_84 = 0;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
            }
            cVar2 = FUN_1001782e9(0,0);
            if (cVar2 == '\0') goto LAB_10048f494;
          }
          local_68[0] = &PTR_FUN_10085c600;
          local_48 = local_68;
          FUN_1003a0b06(param_2,0,param_5,local_68);
          if (local_48 == local_68) {
            lVar6 = 0x20;
          }
          else {
            lVar6 = 0x28;
            if (local_48 == (undefined ***)0x0) goto LAB_10048f494;
          }
          (**(code **)((long)*local_48 + lVar6))();
        }
      }
      else if (param_1 == 0x61747269) goto LAB_10048f052;
    }
    else {
      if (param_1 != 0x6174726e) {
        if (param_1 == 0x64747269) goto LAB_10048f0c9;
        if (param_1 != 0x6474726e) goto LAB_10048f494;
      }
LAB_10048f041:
      if (param_2 != 0) {
        lVar6 = *(long *)(param_2 + 8);
LAB_10048f052:
        if (((lVar6 != 0) && ((*(byte *)(param_5 + 0xa6) & 3) == 1)) &&
           (((*(byte *)(param_5 + 0xa6) & 4) == 0 && ((char)param_5[0xa8] != '\0')))) {
          cVar2 = FUN_100474865(lVar6);
          cVar3 = FUN_100482222(param_5,1);
          if (cVar2 == cVar3) {
            FUN_1005821b3(param_5,1);
          }
        }
      }
    }
  }
  else if (param_1 < 0x6d747269) {
    if (param_1 == 0x68747269) {
LAB_10048f0c9:
      bVar1 = *(byte *)(param_5 + 0xa6);
      if ((bVar1 & 3) == 1) {
        if (*param_5 == 0x706c7374) {
LAB_10048f11f:
          if (((bVar1 & 1) != 0) && (*(char *)((long)param_5 + 0x2a3) != '\0')) {
            if ((short)param_5[4] == 0) {
              iVar4 = FUN_10036a7df(param_5,&local_98);
              if (iVar4 == 0) {
                FUN_10031baf6(param_2,&local_dc);
                if (((((int)local_94 == local_d8) && (iStack_88 == local_cc)) &&
                    (local_94._4_4_ == local_d4)) &&
                   ((CONCAT22(uStack_8a,local_8c) == local_d0 && (local_98 == local_dc)))) {
                  if (*(int *)(*(long *)(param_5 + 2) + 0x84) == 0x646f5069) {
                    FUN_100488d27(param_5,0,0);
                    piVar7 = (int *)0x0;
                  }
                  else {
                    FUN_10036ae80(param_5);
                  }
                }
              }
LAB_10048f47f:
              if (piVar7 == (int *)0x0) goto LAB_10048f4b5;
            }
            goto LAB_10048f494;
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_98 = 0x8220202;
            local_94 = "Assertion failure (expected to be true)";
            local_8c = 0x822;
            uStack_8a = 0x2d50;
            iStack_88 = 0x1007b;
            uStack_84 = 0;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
          }
          cVar2 = FUN_1001782e9(0,1);
          if (cVar2 != '\0') {
            bVar1 = *(byte *)(param_5 + 0xa6);
            goto LAB_10048f11f;
          }
        }
        if ((param_1 == 0x68747269) || (*(char *)((long)param_5 + 0x2a1) != '\0'))
        goto LAB_10048f052;
      }
    }
    else if (param_1 == 0x6c747269) {
      lVar6 = FUN_10048584d(param_2,param_5,0);
      if (lVar6 != 0) {
        FUN_1001c62d9(&local_98,0x20);
        FUN_1005389ba(&local_98,0xf);
        FUN_1001c6987(param_5 + 0x32,0x63706c69,lVar6,&local_98,0);
        cVar2 = FUN_100489d0a(param_5);
        if (cVar2 != '\0') {
          FUN_100489e7b(param_5);
        }
      }
    }
    else if (param_1 == 0x6d747070) {
      lVar6 = FUN_100242590(param_3);
      goto LAB_10048f052;
    }
  }
  else {
    if (param_1 == 0x73747269) goto LAB_10048f052;
    if (param_1 == 0x7274726e) goto LAB_10048f041;
    if ((param_1 == 0x6d747269) && (*(long *)(param_2 + 0x68) != 0)) {
      if ((*(byte *)(param_5 + 0xa6) & 5) == 1) {
        cVar2 = FUN_100474865(param_2);
        cVar3 = FUN_100482222(param_5,1);
        if (cVar2 == cVar3) {
          FUN_100538877(&local_98,param_5 + 0xb2);
          cVar2 = FUN_10053941c(&local_98,param_3);
          if (cVar2 != '\0') {
            FUN_1005821b3(param_5,1);
          }
        }
      }
      if (((short)param_5[4] == 7) && (cVar2 = FUN_10053916d(param_3,0x5b), cVar2 != '\0')) {
        FUN_10044b064(*(undefined8 *)(param_5 + 2));
      }
      puVar8 = *(undefined8 **)(param_2 + 0x68);
      if (puVar8 != (undefined8 *)0x0) {
LAB_10048f02a:
        if ((int *)*puVar8 != param_5) goto code_r0x00010048f033;
        FUN_100483032(param_5,param_3);
        local_99 = FUN_10053941c(param_3,param_5 + 0xda);
        local_b0 = param_5 + 0x32;
        do {
          if ((int *)*puVar8 == param_5) {
            if (local_99 != '\0') {
              FUN_1003a81b6(puVar8,0);
            }
            FUN_1001c6987(local_b0,0x63706c69,puVar8,param_3,0);
          }
          puVar8 = (undefined8 *)puVar8[10];
        } while (puVar8 != (undefined8 *)0x0);
        goto LAB_10048f47f;
      }
    }
  }
LAB_10048f494:
  if (*(code **)(piVar7 + 0x4c) != (code *)0x0) {
    (**(code **)(piVar7 + 0x4c))(param_1,param_2,param_3,local_a8,param_5);
  }
LAB_10048f4b5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
code_r0x00010048f033:
  puVar8 = (undefined8 *)puVar8[10];
  if (puVar8 == (undefined8 *)0x0) goto LAB_10048f47f;
  goto LAB_10048f02a;
}

