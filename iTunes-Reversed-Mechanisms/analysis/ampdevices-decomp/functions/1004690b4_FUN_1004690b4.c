// name: FUN_1004690b4
// address: 1004690b4

int FUN_1004690b4(undefined8 param_1,undefined4 param_2,undefined8 param_3,char *param_4,int param_5
                 ,long *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  long *plVar7;
  size_t sVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  int local_86a;
  char local_858 [1024];
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1002441f8(param_1,param_3,param_2,0,local_458);
  iVar3 = 0;
  if (((iVar2 != -0x2b) && (iVar3 = iVar2, iVar2 == 0)) &&
     (iVar3 = FUN_1001823de(local_458,local_858,0x400), iVar3 != -0x80)) {
    if (iVar3 == 0) {
      sVar4 = _strlen(param_4);
      sVar5 = _strlen(local_858);
      if (sVar5 < sVar4) {
        sVar4 = sVar5;
      }
      sVar8 = 0;
      sVar5 = sVar8;
      if (sVar4 != 0) {
        do {
          sVar5 = sVar8;
          if (param_4[sVar8] != local_858[sVar8]) break;
          sVar8 = sVar8 + 1;
          sVar5 = sVar4;
        } while (sVar4 != sVar8);
      }
      FUN_1001dfeed(local_858,0,sVar5);
      if (local_858[0] == '/') {
        FUN_1001dfeed(local_858,0,1);
      }
      plVar9 = (long *)param_6[1];
      if ((long *)param_6[1] == (long *)0x0) {
        plVar10 = param_6 + 1;
        plVar11 = plVar10;
      }
      else {
        do {
          while (plVar10 = plVar9, (int)plVar10[4] <= param_5) {
            if (param_5 <= (int)plVar10[4]) goto LAB_10046929f;
            plVar9 = (long *)plVar10[1];
            if ((long *)plVar10[1] == (long *)0x0) {
              plVar11 = plVar10 + 1;
              goto LAB_10046924d;
            }
          }
          plVar9 = (long *)*plVar10;
          plVar11 = plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
LAB_10046924d:
      plVar7 = operator_new(0x40);
      *(int *)(plVar7 + 4) = param_5;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = (long)plVar10;
      *plVar11 = (long)plVar7;
      plVar9 = plVar7;
      if (*(long *)*param_6 != 0) {
        *param_6 = *(long *)*param_6;
        plVar9 = (long *)*plVar11;
      }
      FUN_1001ad344(param_6[1],plVar9);
      param_6[2] = param_6[2] + 1;
      plVar10 = plVar7;
LAB_10046929f:
      FUN_1004699f6(plVar10 + 5,local_858);
      iVar3 = 0;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_878 = 0x8220202;
        local_874 = "Assertion failure";
        local_86c = 0x400;
        local_86a = iVar3;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_878,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

