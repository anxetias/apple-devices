// name: dealloc
// address: 100360a8d

/* Function Stack Size: 0x10 bytes */

void ITFileDataHoldingURL::dealloc(ID param_1,SEL param_2)

{
  ID local_38;
  undefined *local_30;
  
  FUN_10017060f(*(undefined8 *)(param_1 + mHeldData));
  local_30 = PTR_ITFileDataHoldingURL_1008856e0;
  local_38 = param_1;
  NSURL::dealloc((ID)&local_38,PTR_s_dealloc_10088c4f0);
  return;
}

