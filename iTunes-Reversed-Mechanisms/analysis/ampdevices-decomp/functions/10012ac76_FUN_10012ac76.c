// name: FUN_10012ac76
// address: 10012ac76

undefined8 * FUN_10012ac76(undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  double dVar5;
  ulong local_38 [2];
  
  std::mutex::lock();
  plVar4 = *(long **)(param_2 + 8);
  if (*plVar4 != 0) {
    dVar5 = (double)FUN_1001711e2();
    plVar4 = *(long **)(param_2 + 8);
    if ((double)plVar4[3] <= dVar5 && dVar5 != (double)plVar4[3]) {
      uVar3 = FUN_10012a714();
      cVar2 = _os_log_type_enabled(uVar3,1);
      if (cVar2 != '\0') {
        local_38[0] = local_38[0] & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar3,1,"Valid bag present but expired. Returning empty bag.",
                      local_38,2);
      }
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_10032f0f2();
      FUN_1001a7b1c(*(undefined8 *)(param_2 + 8),local_38);
      FUN_1001a8fac(local_38);
      plVar4 = *(long **)(param_2 + 8);
    }
    if (*plVar4 != 0) {
      *param_1 = plVar4;
      lVar1 = *(long *)(param_2 + 0x10);
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      std::mutex::unlock();
      return param_1;
    }
  }
  *param_1 = plVar4;
  lVar1 = *(long *)(param_2 + 0x10);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  std::mutex::unlock();
  FUN_10012adae(param_2);
  return param_1;
}

