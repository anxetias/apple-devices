// rea decompile_all
// name: lzma_copy_with_pattern
// address: 0x3a22f0
// body: available
// range: 0x3a22f0-0x3a22f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* lzma_copy_with_pattern(unsigned char*, unsigned int, unsigned int) [clone .repeat_perm] */

void lzma_copy_with_pattern(uchar *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *in_RAX;
  undefined7 uVar5;
  long lVar4;
  char *in_RCX;
  undefined4 in_register_00000014;
  char *unaff_RBX;
  
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1;
  uVar5 = (undefined7)((ulong)in_RAX >> 8);
  cVar1 = cVar1 + *in_RAX;
  *(int *)CONCAT44(in_register_00000014,param_3) =
       *(int *)CONCAT44(in_register_00000014,param_3) + (int)(char *)CONCAT71(uVar5,cVar1);
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *(char *)CONCAT71(uVar5,cVar1);
  *(int *)CONCAT44(in_register_00000014,param_3) =
       *(int *)CONCAT44(in_register_00000014,param_3) + (int)(char *)CONCAT71(uVar5,cVar1);
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *(char *)CONCAT71(uVar5,cVar1);
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *unaff_RBX;
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *unaff_RBX;
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *unaff_RBX;
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *unaff_RBX;
  *in_RCX = *in_RCX + cVar1;
  lVar4 = CONCAT71(uVar5,cVar1 + *unaff_RBX);
  iVar2 = (int)lVar4;
  *(int *)CONCAT44(in_register_00000014,param_3) =
       *(int *)CONCAT44(in_register_00000014,param_3) + iVar2;
  uVar3 = iVar2 + *(int *)(lVar4 * 2);
  *(uint *)CONCAT44(in_register_00000014,param_3) =
       *(int *)CONCAT44(in_register_00000014,param_3) + uVar3;
  cVar1 = (char)uVar3 + (char)*(undefined4 *)((ulong)uVar3 * 2);
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *unaff_RBX + '\x05';
  *in_RCX = *in_RCX + cVar1;
  cVar1 = cVar1 + *unaff_RBX + '\x05';
  *in_RCX = *in_RCX + cVar1;
  *in_RCX = *in_RCX + cVar1 + *unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

