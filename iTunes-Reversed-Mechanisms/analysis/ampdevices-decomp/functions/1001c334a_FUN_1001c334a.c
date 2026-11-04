// name: FUN_1001c334a
// address: 1001c334a

undefined8 FUN_1001c334a(undefined8 param_1,undefined4 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  
  pcVar1 = (cfstringStruct *)FUN_1001c3393(param_2);
  pcVar2 = &cf___;
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar2 = pcVar1;
  }
  FUN_1001b7eb0(param_1,pcVar2);
  return param_1;
}

