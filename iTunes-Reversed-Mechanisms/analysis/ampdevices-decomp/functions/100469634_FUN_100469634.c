// name: FUN_100469634
// address: 100469634

int FUN_100469634(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = (long *)*param_2;
  if (plVar4 == param_2 + 1) {
    iVar3 = 0;
  }
  else {
    do {
      if ((*(byte *)(plVar4 + 5) & 1) == 0) {
        lVar6 = (long)plVar4 + 0x29;
      }
      else {
        lVar6 = plVar4[7];
      }
      iVar3 = FUN_1001d3f49(*(undefined8 *)(*param_1 + 0x68),"base_location","id",
                            (long)(int)plVar4[4],"path",lVar6);
      if (iVar3 != 0) {
        if (iVar3 != -0x80) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar3;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        break;
      }
      plVar1 = (long *)plVar4[1];
      plVar7 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar7[2];
          bVar8 = (long *)*plVar4 != plVar7;
          plVar7 = plVar4;
        } while (bVar8);
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    } while (plVar4 != param_2 + 1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

