// name: FUN_100182047
// address: 100182047

void FUN_100182047(void)

{
  char cVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  DAT_1008900c1 = '\x01';
  if (DAT_1008900c0 == '\0') {
    DAT_1008900c0 = 1;
    do {
      DAT_1008900c1 = '\0';
      FUN_10018ea87(&local_38);
      cVar1 = FUN_1001819f6(&local_38);
      if (cVar1 != '\0') {
        FUN_100181c45();
      }
    } while (DAT_1008900c1 != '\0');
    DAT_1008900c0 = '\0';
  }
  local_20 = &local_38;
  FUN_100161f2a();
  return;
}

