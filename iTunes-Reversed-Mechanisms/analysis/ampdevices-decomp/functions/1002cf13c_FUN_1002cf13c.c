// name: FUN_1002cf13c
// address: 1002cf13c

void FUN_1002cf13c(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = 0x10;
  while (*(int *)((long)&PTR_s_10AACEncoder_100846500 + lVar1) != param_1) {
    lVar1 = lVar1 + 0x18;
    if (lVar1 == 49000) {
      return;
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)((long)&PTR_PTR_100846508 + lVar1);
  }
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  *param_3 = *(undefined8 *)((long)&DAT_100846510 + lVar1);
  return;
}

