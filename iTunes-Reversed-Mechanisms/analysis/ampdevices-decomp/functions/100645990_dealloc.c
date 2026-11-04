// name: dealloc
// address: 100645990

/* Function Stack Size: 0x10 bytes */

void AMPDevicesClientConnection::dealloc(ID param_1,SEL param_2)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  objc_super local_38;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    pvVar2 = (void *)*plVar1;
    if (pvVar2 != (void *)0x0) {
      pvVar4 = (void *)plVar1[1];
      pvVar3 = pvVar2;
      if (pvVar4 != pvVar2) {
        do {
          pvVar4 = (void *)((long)pvVar4 + -0x18);
          FUN_100648c92(pvVar4);
        } while (pvVar4 != pvVar2);
        pvVar3 = (void *)*plVar1;
      }
      plVar1[1] = (long)pvVar2;
      operator_delete(pvVar3);
    }
    operator_delete(plVar1);
  }
  local_38.super_class = (class_t *)PTR_AMPDevicesClientConnection_100885728;
  local_38.receiver = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_dealloc_10088c4f0);
  return;
}

