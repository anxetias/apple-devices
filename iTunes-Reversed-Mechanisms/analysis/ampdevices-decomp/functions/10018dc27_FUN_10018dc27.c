// name: FUN_10018dc27
// address: 10018dc27

void FUN_10018dc27(void)

{
  undefined8 *puVar1;
  
  FUN_1001e9de0(&DAT_100890668);
  while (puVar1 = DAT_1008906b0, DAT_1008906b0 != (undefined8 *)0x0) {
    DAT_1008906b0 = (undefined8 *)*DAT_1008906b0;
    operator_delete(puVar1);
  }
  FUN_1001e9eb9(&DAT_100890668);
  FUN_1001e9d75(&DAT_100890668);
  return;
}

