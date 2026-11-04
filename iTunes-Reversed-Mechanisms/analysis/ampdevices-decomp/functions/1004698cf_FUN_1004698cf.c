// name: FUN_1004698cf
// address: 1004698cf

undefined8 FUN_1004698cf(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined2 local_418;
  undefined1 local_416 [510];
  undefined2 local_218;
  undefined1 local_216 [510];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == param_2) {
    uVar1 = 0;
  }
  else {
    FUN_1005e4722(param_1,1,&local_218);
    FUN_1005e4722(param_2,1,&local_418);
    uVar1 = FUN_1002dd449(local_216,local_218,local_416,local_418);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

