// name: FUN_1001bb308
// address: 1001bb308

long * FUN_1001bb308(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long local_48;
  long lStack_40;
  
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a2388(uVar4);
    }
    FUN_1001782e9(0,0);
    *param_1 = (long)param_1;
    param_1[1] = (long)param_1;
    param_1[2] = 0;
  }
  else {
    lVar3 = FUN_10017076e(param_2);
    *param_1 = (long)param_1;
    param_1[1] = (long)param_1;
    param_1[2] = 0;
    if (0 < lVar3) {
      lVar6 = 0;
      do {
        uVar4 = FUN_100164a01(param_2,lVar6);
        FUN_1001b7e36(&local_48,uVar4);
        plVar5 = operator_new(0x20);
        plVar5[2] = local_48;
        plVar5[3] = lStack_40;
        local_48 = 0;
        lStack_40 = 0;
        plVar5[1] = (long)param_1;
        lVar1 = *param_1;
        *plVar5 = lVar1;
        *(long **)(lVar1 + 8) = plVar5;
        *param_1 = (long)plVar5;
        param_1[2] = param_1[2] + 1;
        FUN_1001b811c(&local_48);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
    }
  }
  return param_1;
}

