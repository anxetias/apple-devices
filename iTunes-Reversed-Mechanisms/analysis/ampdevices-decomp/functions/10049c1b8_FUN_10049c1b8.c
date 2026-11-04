// name: FUN_10049c1b8
// address: 10049c1b8

void FUN_10049c1b8(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  void *pvVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong extraout_RDX;
  long *plVar7;
  ulong uVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(uint *)(param_1 + 1);
  plVar2 = (long *)*param_1;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_2 + -1;
  pvVar4 = _calloc((long)param_2,0x10);
  *param_1 = (long)pvVar4;
  plVar7 = plVar2;
  for (uVar8 = (ulong)uVar1; uVar8 != 0; uVar8 = uVar8 - 1) {
    if (1 < *plVar7 + 1U) {
      if (*param_1 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "m_table";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_10049c3f0(param_1,plVar7);
      if ((extraout_RDX & 1) != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "!lookupForWriting(Extractor::extract(entry)).second";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      plVar6 = (long *)FUN_10049c3f0(param_1,plVar7);
      if (*plVar6 == -1) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "!isDeletedBucket(*(lookupForWriting(Extractor::extract(entry)).first))";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      plVar6 = (long *)FUN_10049c3f0(param_1,plVar7);
      *plVar6 = *plVar7;
      plVar6[1] = plVar7[1];
    }
    plVar7 = plVar7 + 2;
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _free(plVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

