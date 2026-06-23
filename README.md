# AFE  

AFE Assignment  

Hugging Face Model Chosen Details:  

Model Name: Meta-Llama-3-8B-Instruct  
Developer: Meta AI  
Dataset Details: * Pre-trained on over 15 trillion tokens of data from publicly available sources.  
  The training dataset is 7x larger than Llama 2 and includes 4x more code data.  
  Over 5% of the dataset consists of high-quality non-English data covering more than 30 languages.  
  Instruction-tuned variants use a mix of publicly available instruction datasets and over 10 million human-annotated examples (combining SFT and RLHF).  
  
  
Training Parameters & Hardware:  
Parameters: 8 Billion  
Context Length: 8,192 tokens  
Vocabulary Size: 128,256 tokens  
Hardware Used: Trained on Meta’s custom 24,000 GPU clusters (Nvidia H100 GPUs).  
Optimization Techniques: Grouped-Query Attention (GQA) for improved inference efficiency; trained using standard auto-regressive language modeling, followed by Supervised Fine-Tuning (SFT) and Rejection Sampling / Proximal Policy Optimization (PPO).

