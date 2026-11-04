// name: FUN_1001bb56c
// address: 1001bb56c

undefined8 * FUN_1001bb56c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  if (param_2 == 2) {
    puVar1 = operator_new(0x12,(nothrow_t *)PTR_nothrow_10082c970);
    *puVar1 = 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined1 *)((long)puVar1 + 0xe) = 0;
    *(undefined2 *)((long)puVar1 + 0xc) = 0x6f6e;
  }
  else if (param_2 == 1) {
    puVar1 = operator_new(0x13,(nothrow_t *)PTR_nothrow_10082c970);
    *puVar1 = 3;
    puVar1[1] = 0x73657900000001;
  }
  else {
    puVar1 = operator_new(0x15,(nothrow_t *)PTR_nothrow_10082c970);
    *puVar1 = 5;
    puVar1[1] = 0x6279616d00000001;
    *(undefined2 *)(puVar1 + 2) = 0x65;
  }
  param_1[1] = puVar1;
  return param_1;
}

