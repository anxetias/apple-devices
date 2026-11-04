// name: FUN_10014efb2
// address: 10014efb2

void FUN_10014efb2(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_10083b420;
  FUN_1001b7a50(param_1 + 4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(param_1[3]);
  (*(code *)puVar1)(param_1[2]);
  (*(code *)puVar1)(param_1[1]);
  operator_delete(param_1);
  return;
}

