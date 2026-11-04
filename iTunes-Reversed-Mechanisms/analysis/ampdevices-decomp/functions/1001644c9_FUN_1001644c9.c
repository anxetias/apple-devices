// name: FUN_1001644c9
// address: 1001644c9

void FUN_1001644c9(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_10088ff98;
  if (DAT_10088ff98 != (void *)0x0) {
    FUN_10016205a(DAT_10088ff98);
    operator_delete(pvVar1);
  }
  DAT_10088ff98 = (void *)0x0;
  return;
}

