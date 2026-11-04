// name: FUN_100117d18
// address: 100117d18

void FUN_100117d18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100835c78;
  if ((long *)param_1[0x165] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x165] + 8))();
  }
  FUN_1001119bc(param_1);
  operator_delete(param_1);
  return;
}

