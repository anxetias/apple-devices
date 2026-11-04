// name: FUN_10039c662
// address: 10039c662

void FUN_10039c662(undefined8 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined **local_68;
  code *local_60;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  DAT_1008c7590 = DAT_1008c7590 + -1;
  if (param_2 != 0) {
    local_68 = &PTR_FUN_100856548;
    local_48 = &local_68;
    plVar3 = (long *)FUN_10039c40c(param_1,&local_68);
    if (local_48 == &local_68) {
      lVar4 = 0x20;
LAB_10039c6cf:
      (**(code **)((long)*local_48 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_48 != (undefined ***)0x0) goto LAB_10039c6cf;
    }
    if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3), iVar2 == param_2)
       ) {
      FUN_10042288a(&local_68,plVar3,param_3);
      goto LAB_10039c786;
    }
  }
  plVar3 = (long *)FUN_10039a28c();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,0,0,0,0);
  if (cVar1 != '\0' || DAT_1008c7590 != 0) goto LAB_10039c786;
  local_68 = &PTR_FUN_1008565c8;
  local_60 = FUN_10039c821;
  local_48 = &local_68;
  plVar3 = (long *)FUN_10039c40c(param_1,&local_68);
  if (local_48 == &local_68) {
    lVar4 = 0x20;
LAB_10039c768:
    (**(code **)((long)*local_48 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_48 != (undefined ***)0x0) goto LAB_10039c768;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x80))(plVar3,0,1);
  }
LAB_10039c786:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

