// name: FUN_10032f303
// address: 10032f303

void FUN_10032f303(void)

{
  undefined4 *local_38;
  char local_30;
  undefined1 local_28 [16];
  
  FUN_10032f11e(&local_38);
  FUN_1001e0d0f(local_28,local_38 + 1,*local_38,0,0);
  FUN_1001b80b2(&DAT_1008bd7b8,local_28);
  FUN_1001b7a50(local_28);
  if (local_30 == '\x01') {
    operator_delete(local_38);
  }
  return;
}

