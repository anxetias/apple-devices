// rea decompile_all
// name: std::string::__assign_trivial[abi:ne190102]<unsigned_char*,unsigned_char*>
// address: 0x2538a8
// body: available
// range: 0x2538a8-0x253955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::string::__assign_trivial[abi:ne190102]<unsigned char*, unsigned char*>(unsigned char*,
   unsigned char*, unsigned long) */

void __thiscall
std::string::__assign_trivial_abi_ne190102_<unsigned_char*,unsigned_char*>
          (string *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  string sVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  
  sVar1 = *this;
  uVar2 = (ulong)(byte)sVar1;
  if (((byte)sVar1 & 1) == 0) {
    if (param_3 < 0x17) goto LAB_00253912;
    uVar2 = (ulong)((byte)sVar1 >> 1);
    uVar4 = 0x16;
  }
  else {
    uVar2 = *(ulong *)this;
    uVar4 = (uVar2 & 0xfffffffffffffffe) - 1;
    if (param_3 <= uVar4) goto LAB_00253912;
    uVar2 = *(ulong *)(this + 8);
  }
  std::string::__grow_by((ulong)this,uVar4,param_3 - uVar4,uVar2,0,uVar2);
  *(undefined8 *)(this + 8) = 0;
  uVar2 = (ulong)(byte)*this;
LAB_00253912:
  if ((uVar2 & 1) == 0) {
    psVar3 = this + 1;
  }
  else {
    psVar3 = *(string **)(this + 0x10);
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *psVar3 = (string)*param_1;
    psVar3 = psVar3 + 1;
  }
  *psVar3 = (string)0x0;
  if (((byte)*this & 1) == 0) {
    *this = (string)((char)param_3 * '\x02');
  }
  else {
    *(ulong *)(this + 8) = param_3;
  }
  return;
}

