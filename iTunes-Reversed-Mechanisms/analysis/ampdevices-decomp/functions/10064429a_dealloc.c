// name: dealloc
// address: 10064429a

/* Function Stack Size: 0x10 bytes */

void AMPDeviceProgress::dealloc(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  objc_super local_18;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[2] = 0;
  }
  local_18.super_class = (class_t *)PTR_AMPDeviceProgress_100885718;
  local_18.receiver = param_1;
  _objc_msgSendSuper2(&local_18,PTR_s_dealloc_10088c4f0);
  return;
}

